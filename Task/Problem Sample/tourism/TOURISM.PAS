const

     fi         =       'tourism.inp';
     fo         =       'tourism.out';
     maxN       =       10001;
     sum        =       1000000000;

var

     f          :       text;
     n,p,sl     :       int64;
     a,c,t,luu  :       array[0..maxN]of int64;

procedure nhapdl;
var

     i          :       longint;

begin

     assign(f,fi);
     reset(f);

     readln(f,n);
     readln(f,p);
     a[0]:=0;
     for i:=1 to n do read(f,a[i]);

     close(f);

end;

procedure xuli;
var

     i,j        :       longint;
     tong       :       int64;

begin

     c[0]:=0;
     for i:=1 to n do
       begin
         c[i]:=sqr(a[i]-a[i-1]-p)+c[i-1];
         t[i]:=i-1;
         for j:=i-2 downto 0 do
           begin
             tong:=sqr(a[i]-a[j]-p);
             if tong>c[i] then break;
             if tong+c[j]<c[i] then
               begin
                 c[i]:=tong+c[j];
                 t[i]:=j;
               end;
           end;
       end;

end;

procedure truyvet;
var

     i          :       longint;

begin

     sl:=0; i:=n;
     while i>0 do
       begin
         inc(sl);
         luu[sl]:=i;
         i:=t[i];
       end;

end;

procedure ghikq;
var

     i          :       longint;

begin

     assign(f,fo);
     rewrite(f);

     writeln(f,c[n]);
     truyvet;
     writeln(f,sl);
     for i:=sl downto 1 do write(f,luu[i],#32);

     close(f);

end;

begin

     nhapdl;
     xuli;
     ghikq;

end.
