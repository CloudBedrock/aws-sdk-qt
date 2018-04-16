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

#include "getbucketreplicationrequest.h"
#include "getbucketreplicationrequest_p.h"
#include "getbucketreplicationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketReplicationRequest
 *
 * \brief The GetBucketReplicationRequest class encapsulates S3 GetBucketReplication requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketReplication
 */

/*!
 * @brief  Constructs a new GetBucketReplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketReplicationRequest::GetBucketReplicationRequest(const GetBucketReplicationRequest &other)
    : S3Request(new GetBucketReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBucketReplicationRequest object.
 */
GetBucketReplicationRequest::GetBucketReplicationRequest()
    : S3Request(new GetBucketReplicationRequestPrivate(S3Request::GetBucketReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketReplicationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBucketReplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketReplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketReplicationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketReplicationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBucketReplicationRequestPrivate
 *
 * @brief  Private implementation for GetBucketReplicationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketReplicationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketReplicationRequest instance.
 */
GetBucketReplicationRequestPrivate::GetBucketReplicationRequestPrivate(
    const S3Request::Action action, GetBucketReplicationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketReplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketReplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketReplicationRequest instance.
 */
GetBucketReplicationRequestPrivate::GetBucketReplicationRequestPrivate(
    const GetBucketReplicationRequestPrivate &other, GetBucketReplicationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
