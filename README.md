# Pattern Printing in C++

This repository contains multiple pattern-printing programs written in C++. Each function generates a different pattern based on user input.

## Features

 - Various pattern types: pyramids, diamonds, numbers, and alphabets.
 - Simple C++ implementation using loops and conditions
 
 - Easy-to-use functions.


## Available Patterns

The following functions are available:

- print7(n): [Pyramid pattern](https://github.com/shrey-s12/Pattern-Programs/blob/aff2d91e471fee90750dcfaee1ee228cf7f8d88e/patterns.cpp#L4)

  ![Screenshot 2025-03-03 113137](https://github.com/user-attachments/assets/28eb95a4-5b01-4001-825d-50d03ec89fba)
- print8(n): [Inverted pyramid pattern](https://github.com/shrey-s12/Pattern-Programs/blob/aff2d91e471fee90750dcfaee1ee228cf7f8d88e/patterns.cpp#L20)

  ![Screenshot 2025-03-03 113211](https://github.com/user-attachments/assets/5071ca8f-fc96-4f88-8748-49fb1da5333e)

- print9(n): [Full diamond pattern](https://github.com/shrey-s12/Pattern-Programs/blob/aff2d91e471fee90750dcfaee1ee228cf7f8d88e/patterns.cpp#L36)

  ![Screenshot 2025-03-03 113340](https://github.com/user-attachments/assets/7d351b0f-85ac-4ae5-baf5-d5e2f49c7f93)

- print10(n): [Half-diamond pattern](https://github.com/shrey-s12/Pattern-Programs/blob/bd2219d83844dd1489aa5a190e8440cc2d1621ec/patterns.cpp#L64)

  ![Screenshot 2025-03-03 113408](https://github.com/user-attachments/assets/da562e34-f518-4d8c-9710-f428aa491256)

- print11(n): [Binary triangle pattern](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L98)

  ![Screenshot 2025-03-03 123032](https://github.com/user-attachments/assets/2160d335-dd8e-4133-8ae1-61387b71b426)

- print12(n): [Number triangle with spaces](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L120C1-L120C6)

  ![Screenshot 2025-03-03 123056](https://github.com/user-attachments/assets/1a49eaa6-d744-40f4-9ff4-7c4b119d7cfd)

- print13(n): [Floyd’s Triangle](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L140)

  ![Screenshot 2025-03-03 123116](https://github.com/user-attachments/assets/9693999f-6938-4022-903a-8425f8e5630a)

- print14(n): [Alphabetic triangle](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L154)

  ![Screenshot 2025-03-03 123138](https://github.com/user-attachments/assets/bf6bf6c0-5fbc-4639-9d43-a2898b0946ae)

- print15(n): [Inverted alphabetic triangle](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L168)

  ![Screenshot 2025-03-03 123159](https://github.com/user-attachments/assets/4476dada-9a8f-4b40-91a7-04f9dfb5854b)

- print16(n): [Repeated alphabetic pattern](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L182)

  ![Screenshot 2025-03-03 123217](https://github.com/user-attachments/assets/8ed03b2b-282e-4a36-9e24-be279ef65e62)

- print17(n): [Pyramid of letters](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L196)

  ![Screenshot 2025-03-03 123240](https://github.com/user-attachments/assets/d4d85dfa-adeb-4730-8b94-9064ca072400)

- print18(n): [Alphabet pattern with decreasing letters](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L224)

  ![Screenshot 2025-03-03 123303](https://github.com/user-attachments/assets/43610f72-69cf-47ae-8a78-5195ce40c822)

- print19(n): [Hollow diamond pattern](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L239)

  ![Screenshot 2025-03-03 123328](https://github.com/user-attachments/assets/e7224a99-bea4-4484-8fd0-39b7fee3b705)

- print20(n): [Alternate hollow diamond](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L281)

  ![Screenshot 2025-03-03 123355](https://github.com/user-attachments/assets/fe04e981-daa9-4091-b16d-4a193dbcb477)

- print21(n): [Square border pattern](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L324)

  ![Screenshot 2025-03-03 123413](https://github.com/user-attachments/assets/3a2e2f5e-a740-4f1f-80ef-efc8ad65c8b6)

- print22(n): [Number pattern in a square](https://github.com/shrey-s12/Pattern-Programs/blob/4b690f6d9300e21e1efdf11d331538f5826d01e7/patterns.cpp#L343)

  ![Screenshot 2025-03-03 123447](https://github.com/user-attachments/assets/a3515953-1c99-4f21-9f03-63c18eed1dcb)


## Example Usage

```C++
int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    print7(n);  // Call any pattern function
    return 0;
}
```

## Contributing

Feel free to contribute by adding more patterns or optimizing existing ones. Fork the repository, make changes, and submit a pull request.

## License

This project is open-source and available under the MIT License.
