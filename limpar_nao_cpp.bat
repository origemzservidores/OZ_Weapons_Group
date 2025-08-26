@echo off
setlocal enabledelayedexpansion

:: Confirmação antes de iniciar
echo Este script ira excluir TODOS os arquivos que NAO possuem a extensao .cpp nas pastas e subpastas, exceto este arquivo .bat.
set /p confirm=Tem certeza que deseja continuar? (S/N): 
if /i "%confirm%" neq "S" goto :end

:: Guarda o nome do arquivo .bat
set "current_bat=%~nx0"

:: Percorre todas as pastas e subpastas e exclui arquivos que não terminem com .cpp ou não sejam o próprio .bat
for /r %%f in (*) do (
    if /i not "%%~xf"==".cpp" (
        if /i not "%%~nxf"=="%current_bat%" (
            echo Deletando: "%%f"
            del "%%f"
        )
    )
)

echo Operacao concluida.
pause
:end
exit
