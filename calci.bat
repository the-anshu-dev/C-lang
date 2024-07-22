

@echo off




set /p a=Enter 1st number : 
set /p b=Enter 2nd number : 
set /a s=a+b
set /a m=a-b
set /a pr=a*b
set /a div = a/b

goto :add


:add
echo add is running
echo Sum of %a% and %b% is : %s%
goto :minus
goto :exit

:minus
echo Minus of %a% and %b% is : %m%
goto :multiply
goto :exit


:multiply
echo Product of %a% and %b% is : %pr%
goto :divide
goto :exit

:divide
echo Division of %a% and %b% is : %div%
goto :exit




:exit 
echo over...

