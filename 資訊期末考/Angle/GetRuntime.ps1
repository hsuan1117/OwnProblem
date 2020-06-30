g++ -std=c++11 -O3 -o ACcode.exe ACcode.cpp
Get-ChildItem "tests\Input\" |
Foreach-Object {
    Measure-Command {
        Get-Content tests\Input\$_ | ./ACcode.exe > tests\Output\$_
    }  > tests\Profile\$_
}