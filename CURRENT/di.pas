unit di;

interface

procedure DivNum; {creates the procedure}
implementation

uses
	sysutils;

procedure DivNum;
	var
		a, b, total: Integer;

	begin
		Sleep(500);
		write(LineEnding, 'ENTER NUMBER: ');
		readln(a);

		Sleep(500);
		write('ENTER NUMBER: ');
		readln(b);

		if b = 0 then
			begin
				Sleep(300);
				writeln('CANNOT DIVIDE BY ZERO');
			end
		else
			begin
				Sleep(300);
				total := a div b;
				writeln(LineEnding, 'TOTAL: ', total);
			end;
	end;
end.
