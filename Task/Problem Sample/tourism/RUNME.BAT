del fp.ini
del fp.dsk
del fp.cfg
del *.o
@Echo off
Cls
Echo                    Chuong trinh cham bai tourism
Echo Dang chay test so 1
Copy tourism.in1 tourism.inp
tourism.exe
Rename tourism.out tourism.ou1

Echo Dang chay test so 2
Copy tourism.in2 tourism.inp
tourism.exe
Rename tourism.out tourism.ou2

Echo Dang chay test so 3
Copy tourism.in3 tourism.inp
tourism.exe
Rename tourism.out tourism.ou3

Echo Dang chay test so 4
Copy tourism.in4 tourism.inp
tourism.exe
Rename tourism.out tourism.ou4

Echo Dang chay test so 5
Copy tourism.in5 tourism.inp
tourism.exe
Rename tourism.out tourism.ou5

Echo Dang chay test so 6
Copy tourism.in6 tourism.inp
tourism.exe
Rename tourism.out tourism.ou6

Echo Dang chay test so 7
Copy tourism.in7 tourism.inp
tourism.exe
Rename tourism.out tourism.ou7

Echo Dang chay test so 8
Copy tourism.in8 tourism.inp
tourism.exe
Rename tourism.out tourism.ou8

Echo Dang chay test so 9
Copy tourism.in9 tourism.inp
tourism.exe
Rename tourism.out tourism.ou9

Echo Dang chay test so 10
Copy tourism.in0 tourism.inp
tourism.exe
Rename tourism.out tourism.ou0

Del tourism.inp
Echo.
Echo Bam mot phim bat ki de tiep tuc
Pause
Cls
chktour.exe
del tourism.ou*
pause