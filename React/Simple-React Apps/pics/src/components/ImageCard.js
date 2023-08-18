import React from "react";

export default class ImageCard extends React.Component {
  constructor(props) {
    super(props);
    this.state = { span: 0 };

    this.imageRef = React.createRef();
  }

  componentDidMount() {
    // console.log(this.imageRef);
    // console.log(this.imageRef.current.clientHeight);

    this.imageRef.current.addEventListener("load", this.setSpan);
  }

  setSpan = () => {
    const imageHeight = this.imageRef.current.clientHeight;
    const span = Math.ceil(imageHeight / 12 + 1);
    this.setState({ span });
  };

  render() {
    const { description, urls } = this.props.Image;
    return (
      <div style={{ gridRowEnd: `span ${this.state.span}` }}>
        <img ref={this.imageRef} alt={description} src={urls.regular} />
      </div>
    );
  }
}
