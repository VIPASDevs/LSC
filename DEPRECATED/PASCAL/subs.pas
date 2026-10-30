unit subs;

interface

procedure SubNum; {makes the code below a function}
implementation

uses
	sysutils;

procedure SubNum;
	var
		a, b, total: Integer;

	begin
		Sleep(500);
		write(LineEnding, 'ENTER NUMBER: ');
		readln(a);

		Sleep(500);
		write('ENTER NUMBER: ');
		readln(b);

		Sleep(300);
		total := a - b;
		writeln(LineEnding, 'TOTAL: ', total);
	end;
end.
