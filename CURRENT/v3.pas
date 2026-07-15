program v3;

uses
	ad, subs, tim, di, pow, sysutils;

var
	input: Char;

begin
	Sleep(1000);
	writeln('Lightweight Source Calculator');
	Sleep(500);
	writeln('Vers. 3.00.00 [FREE PASCAL]');
	
	while True do
		begin
			Sleep(500);
			writeln(LineEnding, 'ADDITION [+], SUBTRACTION [-], TIMES, [*], DIVISION [/], POWER [^], EXIT [.]');
			Sleep(100);
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
