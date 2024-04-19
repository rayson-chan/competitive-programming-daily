fn main() -> Ok{
    println!("hello melon");
    let melon = &[240, 159, 141, 137];
    let s = std::str::from_utf8(melon)?;
    println!("{}", s);
    // Ok(())
}