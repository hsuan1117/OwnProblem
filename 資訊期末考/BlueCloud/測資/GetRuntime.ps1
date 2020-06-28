Get-ChildItem "Input\" |
Foreach-Object {
    Measure-Command {
        Get-Content Input\$_ | ./ACcode.exe > Output\$_
    }  > Profile\$_
}