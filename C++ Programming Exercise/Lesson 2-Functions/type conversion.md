#### Considerations
- Data Loss: Be aware of potential data loss when converting from higher-ranking types to lower-ranking types.
- Readability: Explicit casts make the code clearer and easier to understand.
- Undefined Behavior: Incorrect casts can lead to undefined behavior and should be avoided.
Understanding these rules helps you write correct and efficient C++ code when dealing with mixed data types.
#### Rules for Mixed-Type Expressions 

**Arithmetic Operations:**
- When arithmetic operators (+, -, \*, /, %) are used with mixed data types, the lower-ranking type is promoted to the higher-ranking type. The result of the operation will be of the higher-ranking type.
  
**Assignment:**
- When assigning a value of one type to a variable of another type, implicit conversion may occur. However, assigning a higher-ranking type to a lower-ranking type may result in data loss (e.g., assigning a double to an int).
  
**Loss of Precision:**
- If you assign a floating-point value to an integer variable, the decimal part will be truncated (not rounded).
  
**Explicit Type Conversion (Casting)**

**Static Cast:**

- C++ provides the static_cast operator for explicit type conversions. This is used to perform conversions where the compiler can verify the type compatibility.
**Other casts:**
  
- There are other casts available, such as reinterpret_cast, const_cast, and dynamic_cast, each with its purpose and limitations.
