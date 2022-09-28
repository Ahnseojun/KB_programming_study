function Student(name, age, number) {
    this.name = name
    this.age = age
    this.number = number
}

Student.prototype.regist = function() {
    alert(this.number + ' ' + this.name + ' 학생 등록 완료')
}

Student.prototype.toString = function() {
    return this.name + ' ' + this.number + ' ' + this.age
}

window.onload = () => {
    let my_name = document.querySelector('#name')
    let my_age = document.querySelector('#age')
    let my_num = document.querySelector('#num')

    let my_create = document.getElementById('create')
    let my_read = document.getElementById('read')
    let my_update = document.getElementById('update')
    let my_delete = document.getElementById('delete')

    let my_console_log = document.getElementById('console_log')

    let my_students = []

    my_create.onclick = function() {
        for (const iterator of my_students) {
            if(iterator.number == my_num.value) {
                alert('중복 학생 존재')
                return
            } 
        }
        let tempStudent = new Student(my_name.value, my_age.value, my_num.value)
        my_students.push(tempStudent)
        tempStudent.regist() // 해당 학생의 정보를 띄움
        // 내가 정의한 toString
        console.log(my_students.toString())
        // 
        console.log(my_students)
    }

    function findStudent() {
        // findIndex : 객체형태의 배열에서 특정 조건에 맞는 객체가 몇 번에 있는지 찾기
        // ex) my_num에 적힌 값이랑 number값이 같은 거 찾기

        // indexOf : 숫자나 문자열 형태의 배열에서 찾고자 하는 값의 위치(=인덱스) 찾음
      const idx = my_students.findIndex(
        function(item) {
            return item.number == my_num.value
        }
      )
      if(idx != -1) {
        alert(`${my_students[idx].number}번 학생은 ${my_students[idx].name}`)
      }
    }
    my_read.onclick = findStudent

    my_read.onclick = findStudent

    my_update.addEventListener('click', () => {
        const idx = my_students.findIndex(
        function(item)   {
                    return item.number == my_num.value
            }
        )
        if(idx != -1) {
            my_students[idx].name = my_name.value
            my_students[idx].age = my_age.value
        }
    })

}
