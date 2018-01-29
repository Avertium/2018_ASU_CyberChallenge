# Cryptography Challenges

## 01_CryptoA - 150 Points  
**Difficulty**: Easy  
**Objective**: Decode this string to find the flag:

**ZmxhZzpCM0A3RDB3bkFyMXowbkA=**  
<details>
  <summary><strong>Flag</strong></summary>
	  B3@7D0wnAr1z0n@
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  What encoding ends with <strong>=</strong>?
</details>

----------

## 02_CryptoB - 150 Points  
**Difficulty**: Easy  
**Objective**: Decode the following text to find the flag:

**Jxu Vbqw yi iys_iucfuh_johqddyi**  
<details>
  <summary><strong>Flag</strong></summary>
	  sic_semper_tyrannis
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Shift Cipher
</details>

----------

## 03_CryptoC - 250 Points  
**Difficulty**: Easy  
**Objective**: Decode this string to find the flag:

**77784777104777101777112777977771157771157771197771117771147771007771057771157775377711277752777114777107777121**  
<details>
  <summary><strong>Flag</strong></summary>
	  Thepasswordis5p4rky
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  What has the highest frequency?
</details>

----------

## 04_CryptoD - 200 Points  
**Difficulty**: Easy  
**Objective**: Here's an MD5, Whats the flag?

<strong>647c4d66890ce8005efd47794c0b29c8</strong>

You can use this to help: <strong>~/crypto/wordlist</strong> (located on your team server)  
<details>
  <summary><strong>Flag</strong></summary>
	  westcampusisbestcampus
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  John the Ripper
</details>

----------

## 05_CryptoE - 400 Points  
**Difficulty**: Easy  
**Objective**: Decode This Substitution Cipher:

**pimn qgr'zs tggayok mn yj ogn jsdrzs. nis brooq niyok mugrn nisjs nqvsj gb dyviszj yj: nis tgoksz nis nsxn, nis smjysz ng fsdzqvn. btmk:ogprjssls/ogprfgon**  
<details>
  <summary><strong>How to Solve</strong></summary>
	  Look for words that seem to make sense in context. 1 letter words are "i" or "a"; 2 letter words are "of", "or", "on", "in", "an", "at", etc.; 3 letter words are "the", "are", "and", "can", "not", etc. Decrypt these words to understand the context. For example, "nis" is repeated quite a bit. In context, it makes sense for this to translate to "the". n->t, i->h, s->e. "btmk" could easily be seen as "flag". If it's not apparent, we'll look at another example just to show the thought process. We know n->t, so "mn" must be "at". Now we know m->a. Given "pimn", we know "imn" translates to "hat" so we have 'p'hat. Similar words include "that" and "what". We know "t" so it must be "w". Continue through this process to decode the whole phrase.
</details>
<details>
  <summary><strong>Flag</strong></summary>
	  nowuseeme/nowudont
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Paragraph is in english.

Look for common words / letters.
</details>

----------

## 06_CryptoF - 400 Points  
**Difficulty**: Hard  
**Objective**: Decode this Single Byte XOR Cipher:

**3417171358190c58151d59583e14191f4258315f15350a56351d1d0b1d1d130b59**  
<details>
  <summary><strong>How To Solve</strong></summary>
	  The string is encrypted using XOR. This means <message> XOR <key> = <ciphertext>. To decrypt, <ciphertext> XOR <key> = <message>; it also means <ciphertext> XOR <message> = <key>. You can do this by hand, but don't. Try different single character keys until you get something that looks like normal text. Another way to do this is to look for repeating characters. In this ciphertext, "1717" are two bytes next to each other. This can be "oo", "ee", "tt", etc. Try guessing the keys based on that.
</details>
<details>
  <summary><strong>Flag</strong></summary>
	  I'mMr.Meeseeks!
</details>
<details>
  <summary><strong>Hint</strong></summary>
	  Try different single character keys until you get something that looks like normal text.

Start with a lowercase letter
</details>
