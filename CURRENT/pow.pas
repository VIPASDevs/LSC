unit pow;

interface

uses
	Math;

procedure PowNum; {makes the code below a proc}
implementation

uses
	sysutils;

procedure PowNum;
	var
		a, b, total: Integer;
		{'total: Double' allows power to give the total as an extended number}

	begin
		Sleep(500);
		write(LineEnding, 'BASE NUMBER: ');
		readln(a);

		Sleep(500);
		write('EXPONENT NUMBER: ');
		readln(b);

		Sleep(300);
		total := (Round(Power(a, b)));
		writeln(LineEnding, 'TOTAL: ', total);
	end;
end.
