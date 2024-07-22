@echo on
set str = Outer
echo %str%
CALL :SetValue str
echo %str%
EXIT /B 0
:SetValue
SETLOCAL
set str = Inner
set "%~1 = %str%"
rem ENDLOCAL
EXIT /B 0