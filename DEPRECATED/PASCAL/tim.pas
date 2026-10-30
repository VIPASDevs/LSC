unit tim;

interface

procedure TimNum; {makes the code below a function}
implementation

uses
	sysutils;

procedure TimNum;
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
		total := a * b;
		writeln(LineEnding, 'TOTAL: ', total);
	end;
end.
