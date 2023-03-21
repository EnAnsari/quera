var envelope = document.querySelector('.envelope')
var envelopeTop = document.querySelector('.top')
var letter = document.querySelector('.letter')

let toggle = false;

envelopeTop.classList.add('close');

function openEnvelope() {
    envelopeTop.classList.remove('close');
    envelopeTop.classList.add('open');
    toggle = true;
    pullOut();
}

function closeEnvelope() {
    if (toggle) {
        putIn()
        envelopeTop.classList.remove('open');
        envelopeTop.classList.add('close')
        toggle = false;
    }
}

function putIn() {
    letter.classList.remove('pullOut')
    letter.classList.add('putIn')
}

function pullOut() {
    letter.classList.remove('putIn')
    letter.classList.add('pullOut');
}

envelope.addEventListener('mouseover', openEnvelope);
envelope.addEventListener('mouseout', closeEnvelope);
