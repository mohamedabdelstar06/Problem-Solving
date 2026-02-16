function outer (){
    let a=100
    function inner (){
        console.log(a)
        function inner_inner(){
            a=200
            console.log("From inner_inner",a)
        }
        inner_inner()
    }
    inner()
    
}
outer()