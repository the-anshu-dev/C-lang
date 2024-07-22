@echo off
echo Line1
echo Line2
rem I am comment usinf 'Rem'
pause
ECHO line1
echo Line3
ver
pause 
set /P a= Enter 1st number : 
set /P b= Enter 2nd number : 
set /A s=a+b
echo Sum of %a% and %b% is : %s%

pause

set /p a= Enter 1st number : 
set /p b= Enter 2nd number : 
set /a s=a+b
echo Sum of %a% and %b% is : %s%
