unit pow;

interface

uses
Math;

procedure PowNum; {makes the code below a proc}
implementation

procedure PowNum;
var
a, b, total: Integer;
{'total: Double' allows power to give the total as an extended number}

begin
write(LineEnding, 'BASE NUMBER: ');
readln(a);

write('EXPONENT NUMBER: ');
readln(b);

total := (Round(Power(a, b)));
writeln(LineEnding, 'TOTAL: ', total);
end;
end.
