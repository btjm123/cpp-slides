---
marp: true
author: Benn Tan
size: 4:3
theme: default
class: invert
---

<style>
    :root {
       font-family: Courier New; 
    }
</style>

# C++ in Technical Interviews

---

## Who am I

- Ben
- Y2 (soon) CS at NUS

## Agenda

- [Recap](https://wandbox.org/permlink/se90QdiKcZXHqlTt)
- Standard Template Library
- Custom Classes / Templates

## [Github Link](https://github.com/btjm123/cpp-slides/)

---

## STL stuff

- Containers
- Algorithm
- Iterators

---

## Containers

- Sequence Containers
  - [deque](https://wandbox.org/permlink/yl67N1U2tQlmz2NZ)
  - [vector](https://wandbox.org/permlink/tEwtybBcUqDQ4pWh)
  - list
- [Map](https://wandbox.org/permlink/mgVMm2BL1GzFZJ50)
  - map, unordered_map
- [Set](https://wandbox.org/permlink/d5fCHoFpB39fckJh)
  - set, multiset, unordered_set, unordered_multiset

---

## Deque Implementation

![Deque implementation under the hood](https://i.sstatic.net/SthOW.png)

---

## Other useful containers

- [priority_queue](https://wandbox.org/permlink/cp3jQ4VRBkjk54us) (i.e default is max heap)
- [stack](https://wandbox.org/permlink/NyLQsw4acgIluNPW)
- queue

---

## [Algorithm](https://wandbox.org/permlink/CrmkYWIxFYxSEeaF)

- Sort (i.e hybrid of insertion, quick and heapsort)
  - Custom Sorting
- lower_bound (i.e finds first x >= target)
- upper_bound (i.e finds first x > target)
- nth_element (i.e quickselect)
- next_permutation

---

## [Structs / Classes](https://wandbox.org/permlink/GAoUAdtN96DLgVvc)

- Members of structs are public while those of classes are private by default
- A less toy, more practical [example](https://wandbox.org/permlink/TPzuVZVLM0H4lXEK)

---

## [Templates](https://wandbox.org/permlink/7yJmxa1jFFtOj0Fw)

- Work with generic types

## [Iterators](https://wandbox.org/permlink/8qNygdg6qYVOz1VJ)

- Forward iterators and reverse iterators
