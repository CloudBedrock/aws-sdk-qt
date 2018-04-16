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

#include "copyobjectrequest.h"
#include "copyobjectrequest_p.h"
#include "copyobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CopyObjectRequest
 *
 * \brief The CopyObjectRequest class encapsulates S3 CopyObject requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::copyObject
 */

/*!
 * @brief  Constructs a new CopyObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyObjectRequest::CopyObjectRequest(const CopyObjectRequest &other)
    : S3Request(new CopyObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CopyObjectRequest object.
 */
CopyObjectRequest::CopyObjectRequest()
    : S3Request(new CopyObjectRequestPrivate(S3Request::CopyObjectAction, this))
{

}

/*!
 * \reimp
 */
bool CopyObjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CopyObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyObjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * CopyObjectRequest::response(QNetworkReply * const reply) const
{
    return new CopyObjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CopyObjectRequestPrivate
 *
 * @brief  Private implementation for CopyObjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CopyObjectRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public CopyObjectRequest instance.
 */
CopyObjectRequestPrivate::CopyObjectRequestPrivate(
    const S3Request::Action action, CopyObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CopyObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyObjectRequest instance.
 */
CopyObjectRequestPrivate::CopyObjectRequestPrivate(
    const CopyObjectRequestPrivate &other, CopyObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
