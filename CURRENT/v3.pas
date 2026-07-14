program v3;

uses
ad, subs, tim, di, pow;

var
input: Char;

begin
writeln('Lightweight Source Calculator');
writeln('Vers. 3.00.00 [FREE PASCAL]');
	
while True do
begin
writeln(LineEnding, 'ADDITION [+], SUBTRACTION [-], TIMES, [*], DIVISION [/], POWER [^], EXIT [.]');
write('INPUT: ');
readln(input);
		
case input of
'+': AddNum;
'-': SubNum;
'*': TimNum;
'/': DivNum;
'^': PowNum;
'.': break;
else
writeln('Invalid input! Please try again.');
end;
end; {this is required to end the program. I know it is obv, but it did not click for me for some reason, so I am adding the comment.}
end.
