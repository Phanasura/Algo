function Dist(p1, p2: Point): Real;
 
begin
  Dist := Sqrt(Sqr(p1.x – p2.x) + Sqr(p1.y – p2.y));
end;
