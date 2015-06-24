/*
    Copyright 2013-2015 Paul Colby

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

#include "sqsresponse.h"
#include "sqsresponse_p.h"
#include "sqserror.h"

#include <QDebug>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param parent       This object's parent.
 */
SqsResponse::SqsResponse(QObject * const parent)
    : AwsAbstractResponse(new SqsResponsePrivate(this), parent)
{

}

SqsResponse::SqsResponse(SqsResponsePrivate * const d, QObject * const parent)
    : AwsAbstractResponse(d, parent)
{

}


SqsResponse::~SqsResponse()
{
    delete d_ptr;
}

QString SqsResponse::errorString() const
{
    /// @todo If we have errors...
    ///       else
    return AwsAbstractResponse::errorString();
}

bool SqsResponse::hasError() const
{
    return ((xmlError() != QXmlStreamReader::NoError) ||
            (!serviceErrors().isEmpty()) ||
            (AwsAbstractResponse::hasError()));
}

bool SqsResponse::isValid() const
{
    return ((xmlError() == QXmlStreamReader::NoError) &&
            (serviceErrors().isEmpty()) &&
            (AwsAbstractResponse::isValid()));
}

QString SqsResponse::requestId() const
{
    Q_D(const SqsResponse);
    return d->requestId;
}

SqsErrorList SqsResponse::serviceErrors() const
{
    Q_D(const SqsResponse);
    return d->errors;
}

/// @todo Move to base class?
QXmlStreamReader::Error SqsResponse::xmlError() const
{
    Q_D(const SqsResponse);
    return d->xmlError;
}

/// @todo Move to base class?
QString SqsResponse::xmlErrorString() const
{
    Q_D(const SqsResponse);
    return d->xmlErrorString;
}

bool SqsResponse::parseError(QIODevice &response)
{
    Q_D(SqsResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << Q_FUNC_INFO << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }

    // The stream reader encounted a parse error, add it to the errors list.
    /// @todo Move this to base class?
    if (xml.hasError()) {
        d->xmlError = xml.error();
        d->xmlErrorString = xml.errorString();
    }
    return isValid();
}

/**
 * @internal
 *
 * @class  SqsResponsePrivate
 *
 * @brief  Private implementation for SqsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsResponse instance.
 *
 * @todo   Add operation parameter instead of defaulting to Get?
 */
SqsResponsePrivate::SqsResponsePrivate(SqsResponse * const q)
    : AwsAbstractResponsePrivate(q), xmlError(QXmlStreamReader::NoError)
{

}

SqsResponsePrivate::~SqsResponsePrivate()
{

}

void SqsResponsePrivate::parseErrorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ErrorResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Error")) {
            errors.append(SqsError(xml));
        } else if (xml.name() == QLatin1String("RequestId")) {
            requestId = xml.readElementText();
        } else {
           qWarning() << Q_FUNC_INFO << "ignoring" << xml.name();
           xml.skipCurrentElement();
        }
    }

    // The stream reader encounted a parse error, add it to the errors list.
    /// @todo seprate function?
/*    if (xml.hasError()) {
        QVariantMap detail;
        detail[QLatin1String("characterOffset")] = xml.characterOffset();
        detail[QLatin1String("columnNumber")] = xml.columnNumber();
        detail[QLatin1String("lineNumber")] = xml.lineNumber();
        SqsErrorError error;
        error.code = OtherError;
        error.message = xml.errorString();
        error.rawCode = tr("XmlParseError");
        error.type = OtherType;
        error.detail = detail;
        d->errors.append(error);
    }*/
}

void SqsResponsePrivate::parseResponseMetadata(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResponseMetadata"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("RequestId")) {
            requestId = xml.readElementText();
        } else {
           qWarning() << Q_FUNC_INFO << "ignoring" << xml.name();
           xml.skipCurrentElement();
        }
    }
}

QTAWS_END_NAMESPACE
