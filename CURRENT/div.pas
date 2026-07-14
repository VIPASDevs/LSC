unit di;

interface

procedure DivNum; {creates the procedure}
implementation

procedure DivNum;
var
a, b, total: Integer;

begin
write(LineEnding, 'ENTER NUMBER: ');
readln(a);

write('ENTER NUMBER: ');
readln(b);

if b = 0 then
writeln('CANNOT DIVIDE BY ZERO')
else
begin
total := a div b;
writeln(LineEnding, 'TOTAL: ', total);
end;
end;
end.
