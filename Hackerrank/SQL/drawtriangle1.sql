-- using ms sql server
DECLARE @i int = 20;
while @i > 0
BEGIN
print replicate('* ', @i);
set @i = @i - 1;
end;