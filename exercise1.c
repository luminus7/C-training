/*
<The basis of C Programming Language>
osam.oss.kr 교안다운로드하기
olc.kr 에도 동일한 강의 있음
이렇게 공부한 자료는 MarkDown으로 작성해서 넣기

SangJin Lee

// Introduction to C

In Assume of Linux Environment
Low level Lan - Assembly Language (CPU dependent,Machine Oriented)
High level lan - C,Java,Python...(Human Oriented)

1972 Dennis Ritche (designer of C, AT&T PDP-11 computer) 
1978 "The C Programming Language" aka K&R C
1989 "Programming Language C" aka ANSI C(standard C or C89)
1990 ANSI C aka C90
1999 C99 standard
2007 work began on a new C standard (C1X)

장점: 간결성 이식성 효율성 (왜인지가 궁금한데.. 그 배경이랑)
단점: ~~~

More recent derivatives -> C++, Objective C, C#
Influenced -> JAVA, Perl, Python

C lacks ->
exception / range-checking / garbage collection
object-oriented  programming / Polymorphism

C Program execution procedure
1)Edit source program
2)Compile
3)Link&Load
4)Execute
* Debugging

Linux 환경에서의 Compiler -> gcc

{<unix> gcc -o hello hello.c}
{=>gcc라는 컴파일러를 실행해서 hello.c라는 소스파일을 컴파일해서
hello라는 이름의 실행파일을 만들어 내라}

Preprocessing -> compiler -> Assembler -> Linker
#include            hello.s(Assembly)       hello.o(object code)

printf(라이브러리 코드)

<./hello => Linux dependent environment가정함>
<현재 디렉토리에 있는 hello라는 실행파일을 찾아서 실행하시오>

Shell => 사용자가 내린 명령을 해석해주는 일종의 환경

DOS => command를 사용자가 직접 입력(In Windows)


LINUX환경에서의 에디터 (Vi환경)
Introduction to Vim(Vi) *Vim은 Vi의 일종의 변종
1. vi (file_name)
2. Press i(insert) and type whatever you want
3. Press ESC(escape) and type ":wq"(:write & quit) to save the content
4. cat {file_name} => 자신이 입력한 내용을 확인할 수 있음
5. See the result of step4

Insert mode 자신이 원하는 것을 입력하고 빠져나오고
EX-command mode 자신이 원하는 동작을 하도록 시킬 수 있는 모드

Summary of vi commands
i - insert
a - append (커서가 위치해있는 위치에서 오른쪽 한 칸 위치부터)
x - character (삭제)
X - (왼쪽삭제)
dd - (한줄삭제)
/찾고자_하는_text, ?찾고자_하는_text [- locate] - (아래방향/위방향 ctrl+F)
+ 찾고자 하는 text가 있는 위치표시
n, N - 
wq, zz - save&exit
u - undo (ctrl + z동일)



컴파일 하면 아래에 결과물 나오는 창이 콘솔(console)창임
변수 == 정보를 담아두기 위한 공간
변수명 == 공간에 이름 붙이기
*/


#include <stdio.h>
//int main()
void main(){
    
    printf("hello");
    
//    return 0;
}