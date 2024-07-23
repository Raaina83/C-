const questions = [
    {
    question:"Which is largest animal in the world?",
    answer:[
        {
            test:"Shark",correct:false
        },
        {
            test:"Blue Whale",correct:true
        },
        {
            test:"Elephant",correct:false
        },
        {
            test:"Giraffe",correct:false
        },
    ]
    },
    {
    question:"Who is the current Prime Minister of India?",
    answer:[
        {
            test:"RajNath Singh ",correct:false
        },
        {
            test:"Amit Shah",correct:false
        },
        {
            test:"Narender Modi",correct:true
        },
        {
            test:"Nitish Kumar",correct:false
        },
    ]
    },
    {
    question:"Which term won the 2024 T20 world cup?",
    answer:[
        {
            test:"Pakistan",correct:false
        },
        {
            test:"England",correct:false
        },
        {
            test:"Nepal",correct:false
        },
        {
            test:"India",correct:true
        },
    ]
    },
    {
    question:"Who take retirement form the there t20 format in 2024?",
    answer:[
        {
            test:"Rohit Sharma",correct:false
        },
        {
            test:"Virat Kholi",correct:false
        },
        {
            test:"David Warner",correct:false
        },
        {
            test:"All of them",correct:true
        },
    ]
    },
    {
    question:"Who is the CM of Bihar?",
    answer:[
        {
            test:"Nitish Kumar",correct:true
        },
        {
            test:"Amit Shah",correct:false
        },
        {
            test:"Jitanram Manjhi",correct:false
        },
        {
            test:"Lalu Yadav",correct:false
        },
    ]
    },
        
];

const questionElement = document.getElementById("question");
const answerButton = document.getElementById("answer-button");
const nextButton = document.getElementById("next-btn");

let currentQuestionIndex = 0;
let score = 0;

function startQuiz(){
    currentQuestionIndex =0;
    score =0;
    nextButton.innerHTML = "Next";
    showQuestion();
}

function showQuestion(){
    resetState();
    let currentQuestion = questions[currentQuestionIndex];
    console.log("current", currentQuestion)
    let questionNo = currentQuestionIndex + 1;
    questionElement.innerHTML = questionNo+ ". " + currentQuestion.
    question;

    currentQuestion.answer.forEach((answer) =>{
        // console.log(answer)
        const button = document.createElement("button");
        button.innerHTML = answer.test;
        button.classList.add("btn");
        answerButton.appendChild(button);
        // if(answer.correct){
            button.dataset.correct = answer.correct;
            console.log(button.dataset.correct)
        // }
        button.addEventListener("click",selectAnswer);
    })
}

function resetState(){
    nextButton.style.display = "none";
    while (answerButton.firstChild) {
        answerButton.removeChild(answerButton.firstChild);
    }
}

function selectAnswer(e){
    const selectedBtn = e.target;
    console.log("selected",selectedBtn)
    // console.log(selectedBtn.dataset)
    const isCorrect = selectedBtn.dataset.correct === "true";
    if (isCorrect) {
        selectedBtn.classList.add("correct");
        score++;
    }
    else{
        selectedBtn.classList.add("incorrect");
        console.log("joefghuoiy")
    }

    Array.from(answerButton.children).forEach((button) =>{
        // console.log("button",button)
        if (button.dataset.correct === "true") {
            button.classList.add("correct");
        }
        button.disabled = true;
    });
    nextButton.style.display ="block";
};
function showScore(){
    resetState();
    questionElement.innerHTML = `Your Score ${score} out of ${questions.length} !`;
    nextButton.innerHTML  = `Play Again`;
    nextButton.style.display = "block";
}

 function handleNextButton(){
    currentQuestionIndex++;
    if (currentQuestionIndex<questions.length) {
        showQuestion();
    }
    else{
        showScore();
    }
};

nextButton.addEventListener("click",()=>{
    console.log(questions.length)
    if (currentQuestionIndex<questions.length) {
        handleNextButton();
        console.log("jduqg")
    }
    else{
        startQuiz();
    }
})
startQuiz();