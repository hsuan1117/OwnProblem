#g++ -std=c++11 -O3 -o ACcode.exe ACcode.cpp
#g++ -std=c++11 -O3 -o ACcode2.exe ACcode2.cpp

Get-ChildItem "tests\Input\" |
Foreach-Object {
    Measure-Command {
        Get-Content tests\Input\$_ | ./ACcode.exe | Out-File -FilePath tests\Output\$_ -Encoding utf8 
    }  > tests\Profile\$_

    Measure-Command {
        Get-Content tests\Input\$_ | ./ACcode2.exe | Out-File -FilePath tests\Output_Second\$_ -Encoding utf8 
    }  > tests\Profile\$_

    if(
        (Compare-Object -ReferenceObject $(Get-Content tests\Output\$_) -DifferenceObject $(Get-Content tests\Output_Second\$_))
    ){
    
        "files are different"
    } Else {
        "Files are the same"
    }
}
