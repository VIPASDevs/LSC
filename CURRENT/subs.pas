unit subs;

interface

procedure SubNum; {makes the code below a function}
implementation

procedure SubNum;
var
a, b, total: Integer;

begin
write(LineEnding, 'ENTER NUMBER: ');
readln(a);

write('ENTER NUMBER: ');
readln(b);

total := a - b;
writeln(LineEnding, 'TOTAL: ', total);
end;
end.
