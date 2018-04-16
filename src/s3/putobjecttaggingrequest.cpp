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

#include "putobjecttaggingrequest.h"
#include "putobjecttaggingrequest_p.h"
#include "putobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectTaggingRequest
 *
 * \brief The PutObjectTaggingRequest class encapsulates S3 PutObjectTagging requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putObjectTagging
 */

/*!
 * @brief  Constructs a new PutObjectTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutObjectTaggingRequest::PutObjectTaggingRequest(const PutObjectTaggingRequest &other)
    : S3Request(new PutObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutObjectTaggingRequest object.
 */
PutObjectTaggingRequest::PutObjectTaggingRequest()
    : S3Request(new PutObjectTaggingRequestPrivate(S3Request::PutObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutObjectTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutObjectTaggingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectTaggingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutObjectTaggingRequestPrivate
 *
 * @brief  Private implementation for PutObjectTaggingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutObjectTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutObjectTaggingRequest instance.
 */
PutObjectTaggingRequestPrivate::PutObjectTaggingRequestPrivate(
    const S3Request::Action action, PutObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutObjectTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutObjectTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutObjectTaggingRequest instance.
 */
PutObjectTaggingRequestPrivate::PutObjectTaggingRequestPrivate(
    const PutObjectTaggingRequestPrivate &other, PutObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
