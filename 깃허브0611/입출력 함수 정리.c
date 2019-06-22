/*
	입출력 함수의 분류
	getchar()
	putchar()
	gets_s()
	puts()

	printf()
	scanf(0

	형식 제어 문자
	printf("%10.3f",value)

	c 에서는 텍스트 파일, 이진 파일을 지원한다.
	메모장, 소스파일 : 텍스트 파일, 아스키 코드를 이용
	컴퓨터만 읽을수 있는 파일 : 이진 파일

	파일 열기
	FILE *fp;
	fp = fopen("text.txt","W")
	           ("파일 이름","파일 모드) 파일 열기에 실패하면 NULL 문자를 반환한다.
	
	r : 읽기 모드
	w : 쓰기 모드
	a : 추가 모드. 기존 파일이 있으면 데이터가 파일의 끝에 추가된다.
	r+ : 읽기 모드로 파일을 연다, 쓰기 모드로 전환이 된다.
	w+ : 쓰기 모드로 파일을 연다, 읽 모드로 전환이 된다. 기존 내용이 지워 진다.
	a+ : 추가 모드로 파일을 연다. 읽기 모드로 전환할 수 있다. EOF 마커를 추가된 데이터의 뒤로 이동한다.
	t : 텍스트 파일 모드로 파일을 연다.
	b : 이진 파일 모드로 파일을 연다.

	파일 닫기 fclose(fp) 
	성공적으로 파일을 닫는 경우 0이 반환이 된다. 실패할 경우는 -1이 반환이 된다.

	파일 삭제 remove(파일이름.txt)

	파일 입출력 라이브러리 함수
	int fgetc(FILE *fp) : 문자 단위
	char *fgets(char buf,int n, fILE *fp) : 문자열 단위
	int fscanf(FILE *fp) : 서식 단위
	size_t fread(char *buffer,int sizem int count ,FILE *fp)
	파일에 사람들이 읽을 수 있는 텍스트 형태로 데이터를 저장하는 것
	반환되는 값이 0이면 입출력이 실패한 것.

	문자열 단위 입출력

	char *fgets(char *s,int n,FILE *fp);
	int fputs(char *s,FILE *fp);

	이진 파일 읽기와 쓰기

	이진 파일을 생성하려면 파일 모드에 b를 넣으면 된다.
	쓰기 전용 파일을 열려면 wb, 
	읽기 전용 파일을 열려면 rb,
	추가 모드 파일을 열려면 ab,
	읽고 쓰기를 동시에 하려면 rb+
	를 해주면 된다.

	fwrite(buffer.sizeof(int),SIZE,fp);
		(메모리 블록의 주소, 항목의 크기, 항목의 개수, FILE 포인터)

	fread(buffer,sizeof(int),SIZE,fp);
		(메모리 블록의 주소, 항목의 크기, 항목의 개수, FILE 포인터)

	파일을 처음부터 읽는것을 순차 접근 이라고 한다.
	또 다른 입출력 방법으로 임의 접근 방법이 있다.

	파일 포인터 : 읽기와 쓰기 동작이 현재 어떤 위치에서 이루어지는지 나타내는것

	fseek() 함수를 이용하면 위치 표시자를 보다 정밀하세 제어할 수 있습니다.

	int fseek(FILE *fp,long offset, int origin);
		(FILE 포인터, 거리, 기준 위치)
		fseek(fp,2,SEEK_SET)	처음 위치로부터 2바이트 떨어진 곳
		fseek(fp,-1,SEEK_ENd)	마지막 위치로부터 -1바이트 떨어진 곳

	rewind(fp) : 위치 표시자가 0으로 설정된다. 
	long ftell(FILE *fp) :	위치 표식자의 현재 위치를 알아낸다. 
							현재의 위치 표시자의 값을 long 형으로 반환한다.
	int feof(FILE *fp) :	파일의 끝을 알아내주는 함수. 현재의 위치가 파일의 끝인지 알려준다.

*/