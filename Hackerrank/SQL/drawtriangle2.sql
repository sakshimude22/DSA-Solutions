-- using ms sql server
declare @i int = 1;
while @i <= 20
BEGIN
print replicate('* ', @i);
set @i = @i + 1;
end;