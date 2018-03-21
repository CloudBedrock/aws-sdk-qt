/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createfpgaimagerequest.h"
#include "createfpgaimagerequest_p.h"
#include "createfpgaimageresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateFpgaImageRequest
 *
 * @brief  Implements EC2 CreateFpgaImage requests.
 *
 * @see    EC2Client::createFpgaImage
 */

/**
 * @brief  Constructs a new CreateFpgaImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFpgaImageRequest::CreateFpgaImageRequest(const CreateFpgaImageRequest &other)
    : EC2Request(new CreateFpgaImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFpgaImageRequest object.
 */
CreateFpgaImageRequest::CreateFpgaImageRequest()
    : EC2Request(new CreateFpgaImageRequestPrivate(EC2Request::CreateFpgaImageAction, this))
{

}

bool CreateFpgaImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFpgaImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFpgaImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateFpgaImageRequest::response(QNetworkReply * const reply) const
{
    return new CreateFpgaImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFpgaImageRequestPrivate
 *
 * @brief  Private implementation for CreateFpgaImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFpgaImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateFpgaImageRequest instance.
 */
CreateFpgaImageRequestPrivate::CreateFpgaImageRequestPrivate(
    const EC2Request::Action action, CreateFpgaImageRequest * const q)
    : CreateFpgaImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFpgaImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFpgaImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFpgaImageRequest instance.
 */
CreateFpgaImageRequestPrivate::CreateFpgaImageRequestPrivate(
    const CreateFpgaImageRequestPrivate &other, CreateFpgaImageRequest * const q)
    : CreateFpgaImagePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
