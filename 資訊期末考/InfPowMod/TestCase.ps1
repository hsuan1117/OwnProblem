g++ -std=c++11 -O3 -o ACcode.exe ACcode.cpp
Get-ChildItem "tests\Input\" |
Foreach-Object {
    Measure-Command {
        Get-Content tests\Input\$_ | ./ACcode.exe | Out-File -FilePath tests\Output\$_ -Encoding utf8 
    }  > tests\Profile\$_
    Measure-Command {
        Get-Content tests\Input\$_ | python ./ACcode.py > tests\Output_Python\$_
    }  > tests\Profile_Python\$_
    if(Compare-Object -ReferenceObject $(Get-Content tests\Output\$_) -DifferenceObject $(Get-Content tests\Output_Python\$_)){"files are different"}
    Else {"Files are the same"}
}
