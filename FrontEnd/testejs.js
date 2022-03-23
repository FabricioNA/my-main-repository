const a = 2, b = -16, c = -18
let delta = (Math.pow(b, 2)) - (4 * a * c)
const x1 = (-b + Math.sqrt(delta)) / 2 * a
const x2 = (-b - Math.sqrt(delta)) / 2 * a
console.log (x1, x2)
const xM = x1 + x2
console.log (xM.toFixed(2))
const Tname = 'Linha'
console.log(Tname.charAt(0)) // charCodeAt
console.log(Tname.indexOf('L'))
console.log(Tname.substring(0, 4))
console.log('Direto coloco na '.concat(Tname).concat(" é isso")) // Pode usar o + tb
console.log(Tname.replace('L', 'e'))
console.log('Seu cu, meu pau, nois come'.split(','))
const name = 'fabricio'
const concaten = 'Meu nome é ' + name + '!'
const template = `
    Meu nome é
    ${name}!`
console.log(template, concaten)
const up = txt => txt.toUpperCase()
console.log (`Estou fazendo um ${up(name)}!`)
let nomeV = ''
console.log(nomeV || 'Desconhecido')