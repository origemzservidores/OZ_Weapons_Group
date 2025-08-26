#!/bin/bash

# Lista de todos os branches que precisam ser sincronizados
branches=("main" "Fa" "Kiwey" "SigWar")

# Configura o Git com nome e email (necessário para commits automáticos)
git config --global user.name "SigWar"
git config --global user.email "highnetlan@gmail.com"

# Função para fazer merge das alterações do branch de origem para os outros
merge_to_all_branches() {
    source_branch="$1"
    for target_branch in "${branches[@]}"; do
        if [ "$target_branch" != "$source_branch" ]; then
            echo "### FAZENDO MERGE DE $source_branch PARA $target_branch... ###"
            git checkout "$target_branch"
            git pull origin "$target_branch"
            git merge "$source_branch" -m "Auto merge changes from $source_branch"
            if [ $? -eq 0 ]; then
                git push origin "$target_branch"
                echo "Merge de $source_branch para $target_branch realizado com sucesso!"
            else
                echo "Conflito detectado ao tentar merge de $source_branch para $target_branch. Necessário resolver manualmente."
                break
            fi
        fi
    done
}

# Loop principal para verificar alterações em todos os branches
for branch in "${branches[@]}"; do
    echo "Verificando atualizações no branch: $branch"
    git checkout "$branch"
    git pull origin "$branch"

    # Tenta propagar as alterações desse branch para os outros
    merge_to_all_branches "$branch"
done

# Volta para o branch principal (main) ao final do script
git checkout main