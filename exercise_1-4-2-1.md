> Use the method of working backwards to construct a valid tableau,
> different from that given in the above section for the specification

    {-2<y-z<2}y:=y-z; y=yxy {y<=3}

{-2<y-z<2}
y:=y-z;
{???} 
y=yxy; 
{y<=3}

> Let Q<sub>n</sub> be Q, 
> Q<sub>n-1</sub> be Q<sub>n</sub>|<sub>X<sub>n</sub>->E<sub>n<\sub>
> Q<sub>n-2</sub> be Q<sub>n-1</sub>|<sub>X<sub>n-1</sub>->E<sub>n-1<\sub>
> and so forth.
> then each specification in the tableau
> {P}{Q<sub>0</sub>}X<sub>1</sub>:=E<sub>1</sub>;
{Q<sub>1</sub>}X<sub>2</sub>:=E<sub>2</sub>;...;{Q<sub>n-1</sub>}
{Q<sub>n-1</sub>}X<sub>n</sub>:=E<sub>n</sub>;{Q<sub>1</sub>}{Q}
> will be inferable from the asignment rule, so that the tableau will
> be valid if P implies Q<sub>0</sub>.  

