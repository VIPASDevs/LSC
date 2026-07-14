program v3;

uses {this declares what other units it uses}
ad, subs, tim, di, pow;

var
input: Char;

begin
writeln('Lightweight Source Calculator');
writeln('Version 3.00.00 [FREE PASCAL Vers.]', LineEnding);
writeln('ADDITION [+] | SUBTRACTION [-] | TIMES [*] | POWER [^]');
write('INPUT: ');
readln(input);

case input of
'+': AddNum;
'-': SubNum;
'*': TimNum;
'/': DivNum;
'^': PowNum;
else
writeln('INVALID INPUT.');
end;
end.
