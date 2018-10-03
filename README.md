# act_isda
* Date difference in years according to the Actual/Actual ISDA daycount method
* Synonmyms: Actual/Actual ISDA, Act/Act ISDA, Actual/365 ISDA, Act/365 ISDA


## ISO 20022 -- A008

    "Method whereby interest is calculated based on the actual number of accrued days of the interest period that fall on a normal year, divided by 365, added to the actual number of days of the interest period that fall on a leap year, divided by 366."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/act_isda
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/act_isda": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/act_isda/blob/master/test.c) and [demo.c](https://github.com/hcnn/act_isda/blob/master/demo.c)

```
git clone git@github.com:hcnn/act_isda.git
cd act_isda
make deps
make validate
make showcase
```
