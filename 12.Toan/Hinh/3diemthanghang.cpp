function CCW(p1, p2, p3: Point): Integer;
 
var
  a1, b1, a2, b2, t: Real;
 
begin
  a1 := p2.x – p1.x;
  b1 := p2.y – p1.y;
  a2 := p3.x – p2.x;
  b2 := p3.y – p2.y;
 
  t := a1*b2 – a2*b1;
  if Abs(t) < Eps then CCW := 0
  else
    if t > 0 then CCW := 1
    else CCW := -1;
end;
