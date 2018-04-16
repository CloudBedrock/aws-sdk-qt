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

#include "putbucketnotificationconfigurationrequest.h"
#include "putbucketnotificationconfigurationrequest_p.h"
#include "putbucketnotificationconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationRequest
 *
 * \brief The PutBucketNotificationConfigurationRequest class provides an interface for S3 PutBucketNotificationConfiguration requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketNotificationConfiguration
 */

/*!
 * @brief  Constructs a new PutBucketNotificationConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketNotificationConfigurationRequest::PutBucketNotificationConfigurationRequest(const PutBucketNotificationConfigurationRequest &other)
    : S3Request(new PutBucketNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutBucketNotificationConfigurationRequest object.
 */
PutBucketNotificationConfigurationRequest::PutBucketNotificationConfigurationRequest()
    : S3Request(new PutBucketNotificationConfigurationRequestPrivate(S3Request::PutBucketNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutBucketNotificationConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketNotificationConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketNotificationConfigurationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutBucketNotificationConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutBucketNotificationConfigurationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketNotificationConfigurationRequest instance.
 */
PutBucketNotificationConfigurationRequestPrivate::PutBucketNotificationConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketNotificationConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketNotificationConfigurationRequest instance.
 */
PutBucketNotificationConfigurationRequestPrivate::PutBucketNotificationConfigurationRequestPrivate(
    const PutBucketNotificationConfigurationRequestPrivate &other, PutBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
