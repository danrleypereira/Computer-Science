class Stack:
  top = None

  def __init__(self):
    self.top = None

  def __init__(self, value) -> None:
    self.top = Node(value, None)


  def push(self, value) -> None:
    self.top = Node(value, self.top)

  def pop(self) -> int:
    value = self.top.value
    self.top = self.top.before
    return value
  
  def isEmpty(self) -> bool:
    return self.top is None


class Node:
  value = None
  before = None

  def __init__(self, value, before):
    self.value = value
    self.before = before


notation = "4 5 + 7 8 9 - * *"

for c in notation:
  if c is " ": continue
  if c.isnumeric
