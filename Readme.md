# Love_eating Snake

## Class

### Snake

#### attribute

- body  -`NodeList`
  - every element in list is a position
- head `-[int,int]`
  - the head of snake
- tail `-[int,int]`
  - the head of snake
- direction `-int`
  - up/down/deft/right
- length

#### function

- move() `-void`
  - delete the tail and move its head
- eat() `-void`
  - reserve the tail and move its head
- Fail(size) `-boolean`
  - judge whether the head meets with its body or leave the map
- change_direction(int) `-void`



### Board

#### attribute

- snake `-Snake`
- image `-Mat`
- fruit `-[int, int]`
  - the position of fruit
- size

function

- refresh() `-void`
  - refresh the mat and show it
- init() `-void`
  - initialize the mat and grid
- create_fruit() `-void`
  - generate a fruit in random


### Main

#### function

- main() `-void`