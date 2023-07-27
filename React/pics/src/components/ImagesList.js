import ImageCard from "./ImageCard";
import "./ImageList.css";

export default function ImagesList(props) {
  //   console.log(props.Images);
  //   { description, id, urls } //Destructuring the result object.
  const Image = props.Images.map((Image) => {
    return <ImageCard key={Image.id} Image={Image} />;
  });
  return <div className="image-display">{Image}</div>;
}
