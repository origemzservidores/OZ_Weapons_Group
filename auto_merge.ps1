# Lista de todos os branches que precisam ser sincronizados
$branches = @("main", "SigWar", "Kiwey", "Fa")

# Configura o Git com nome e email (necessário para commits automáticos)
git config --global user.name "kiweyX"
git config --global user.email "a.vieiira01@gmail.com"

# Função para fazer merge das alterações do branch de origem para os outros
function MergeToAllBranches($sourceBranch) {
    foreach ($targetBranch in $branches) {
        if ($targetBranch -ne $sourceBranch) {
            Write-Host "### FAZENDO MERGE DE $sourceBranch PARA $targetBranch... ###"
            git checkout $targetBranch
            git pull origin $targetBranch
            git merge $sourceBranch -m "Auto merge changes from $sourceBranch"
            if ($LASTEXITCODE -eq 0) {
                git push origin $targetBranch
                Write-Host "Merge de $sourceBranch para $targetBranch realizado com sucesso!"
            } else {
                Write-Host "Conflito detectado ao tentar merge de $sourceBranch para $targetBranch. Necessário resolver manualmente."
                break
            }
        }
    }
}

# Loop principal para verificar alterações em todos os branches
foreach ($branch in $branches) {
    Write-Host "Verificando atualizações no branch: $branch"
    git checkout $branch
    git pull origin $branch

    # Tenta propagar as alterações desse branch para os outros
    MergeToAllBranches $branch
}

# Volta para o branch principal (Deploy) ao final do script
git checkout Kiwey