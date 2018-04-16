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

#include "getbucketinventoryconfigurationrequest.h"
#include "getbucketinventoryconfigurationrequest_p.h"
#include "getbucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationRequest
 *
 * \brief The GetBucketInventoryConfigurationRequest class encapsulates S3 GetBucketInventoryConfiguration requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketInventoryConfiguration
 */

/*!
 * @brief  Constructs a new GetBucketInventoryConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketInventoryConfigurationRequest::GetBucketInventoryConfigurationRequest(const GetBucketInventoryConfigurationRequest &other)
    : S3Request(new GetBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBucketInventoryConfigurationRequest object.
 */
GetBucketInventoryConfigurationRequest::GetBucketInventoryConfigurationRequest()
    : S3Request(new GetBucketInventoryConfigurationRequestPrivate(S3Request::GetBucketInventoryConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBucketInventoryConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketInventoryConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketInventoryConfigurationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBucketInventoryConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetBucketInventoryConfigurationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketInventoryConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketInventoryConfigurationRequest instance.
 */
GetBucketInventoryConfigurationRequestPrivate::GetBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketInventoryConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketInventoryConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketInventoryConfigurationRequest instance.
 */
GetBucketInventoryConfigurationRequestPrivate::GetBucketInventoryConfigurationRequestPrivate(
    const GetBucketInventoryConfigurationRequestPrivate &other, GetBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
