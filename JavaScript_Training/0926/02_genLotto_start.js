function getLotto(startnum) {
    // startnum이 첫번째로 들어가고
    // 그 뒤에 들어가는 값들은 무조건 이것보다 커야함
    // 확실하게 '숫자'로 형변환해주는 것
    startnum = Number(startnum)
    
    let lotto = [startnum]

    // 난수 생성 코드
    // indexOf 사용
    for (let i =1; i < 6; i++) {
        let num = Math.floor(Math.random() * 45)+1
        // indexOf : 해당 값이 배연 안에서 어디에 있는지 표시해줌
        // ex) 배열이 [10,20,30] 인데 indexOf(20)하면
        // 숫자 1을 반환해줌. 왜냐하면 [1]번째에 20이 있기 때문
        // 값이 없으면 -1 반환
        if(lotto.indexOf(num) != -1 || num < startnum) {
            i--
            continue
        }
        lotto[i] = num
    }

    // 정렬 코드
    // sort는 함수를 매개변수로 하는 함수
    // sort안에 들어가는 함수를 이용해서 배열 정렬
    // 매개변수 a와 b는 배열 안에 있는 값
    // 두 개의 값을 서로 비교해서 음수, 0 , 양수
    // 뭐가 나오냐에 따라서 정렬이 달라짐
    lotto.sort(function(a,b) {return a-b})

    return lotto 
}
