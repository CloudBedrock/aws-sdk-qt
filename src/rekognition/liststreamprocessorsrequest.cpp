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

#include "liststreamprocessorsrequest.h"
#include "liststreamprocessorsrequest_p.h"
#include "liststreamprocessorsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListStreamProcessorsRequest
 *
 * \brief The ListStreamProcessorsRequest class provides an interface for Rekognition ListStreamProcessors requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listStreamProcessors
 */

/*!
 * @brief  Constructs a new ListStreamProcessorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStreamProcessorsRequest::ListStreamProcessorsRequest(const ListStreamProcessorsRequest &other)
    : RekognitionRequest(new ListStreamProcessorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListStreamProcessorsRequest object.
 */
ListStreamProcessorsRequest::ListStreamProcessorsRequest()
    : RekognitionRequest(new ListStreamProcessorsRequestPrivate(RekognitionRequest::ListStreamProcessorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamProcessorsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListStreamProcessorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStreamProcessorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamProcessorsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamProcessorsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListStreamProcessorsRequestPrivate
 *
 * @brief  Private implementation for ListStreamProcessorsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamProcessorsRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public ListStreamProcessorsRequest instance.
 */
ListStreamProcessorsRequestPrivate::ListStreamProcessorsRequestPrivate(
    const RekognitionRequest::Action action, ListStreamProcessorsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamProcessorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStreamProcessorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStreamProcessorsRequest instance.
 */
ListStreamProcessorsRequestPrivate::ListStreamProcessorsRequestPrivate(
    const ListStreamProcessorsRequestPrivate &other, ListStreamProcessorsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
