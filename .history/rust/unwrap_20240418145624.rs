fn main() {
    println!("hello melon");
    let melon = &[240, 159, 141, 137];
    let s = str::from_utf8(melon)?;
    println!("{}", s);
    Ok(())
}