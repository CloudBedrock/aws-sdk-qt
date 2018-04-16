/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeimagesrequest.h"
#include "describeimagesrequest_p.h"
#include "describeimagesresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::DescribeImagesRequest
 *
 * \brief The DescribeImagesRequest class provides an interface for ECR DescribeImages requests.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::describeImages
 */

/*!
 * @brief  Constructs a new DescribeImagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeImagesRequest::DescribeImagesRequest(const DescribeImagesRequest &other)
    : ECRRequest(new DescribeImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeImagesRequest object.
 */
DescribeImagesRequest::DescribeImagesRequest()
    : ECRRequest(new DescribeImagesRequestPrivate(ECRRequest::DescribeImagesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImagesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeImagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeImagesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImagesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeImagesRequestPrivate
 *
 * @brief  Private implementation for DescribeImagesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeImagesRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public DescribeImagesRequest instance.
 */
DescribeImagesRequestPrivate::DescribeImagesRequestPrivate(
    const ECRRequest::Action action, DescribeImagesRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeImagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeImagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeImagesRequest instance.
 */
DescribeImagesRequestPrivate::DescribeImagesRequestPrivate(
    const DescribeImagesRequestPrivate &other, DescribeImagesRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
